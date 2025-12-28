import pygame
import random
import sys

pygame.init()

# Screen
WIDTH, HEIGHT = 800, 600
screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Original Car Racing Game")

# Colors
GRAY = (50, 50, 50)
WHITE = (255, 255, 255)
RED = (200, 0, 0)
BLUE = (0, 120, 255)
YELLOW = (255, 255, 0)
BLACK = (0, 0, 0)

# Clock
clock = pygame.time.Clock()

# Fonts
font = pygame.font.SysFont(None, 40)
big_font = pygame.font.SysFont(None, 80)

# Road
road_x = 250
road_width = 300
line_y = 0

# Player Car
player_x = 390
player_y = 480
player_speed = 7

# Enemy
enemy_x = random.randint(road_x + 20, road_x + road_width - 70)
enemy_y = -100
enemy_speed = 5

score = 0
game_over = False

def draw_car(x, y, color):
    pygame.draw.rect(screen, color, (x, y, 50, 90))
    pygame.draw.rect(screen, BLACK, (x + 5, y + 10, 40, 20))
    pygame.draw.circle(screen, BLACK, (x + 10, y + 85), 7)
    pygame.draw.circle(screen, BLACK, (x + 40, y + 85), 7)

def show_text(text, font, color, x, y):
    render = font.render(text, True, color)
    screen.blit(render, (x, y))

# Game Loop
running = True
while running:
    screen.fill(GRAY)

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        if game_over and event.type == pygame.KEYDOWN:
            if event.key == pygame.K_r:
                score = 0
                enemy_y = -100
                enemy_speed = 5
                player_x = 390
                game_over = False

    # Road
    pygame.draw.rect(screen, BLACK, (road_x, 0, road_width, HEIGHT))

    line_y += enemy_speed
    if line_y > HEIGHT:
        line_y = 0

    for i in range(0, HEIGHT, 40):
        pygame.draw.rect(screen, WHITE, (WIDTH // 2 - 5, i + line_y, 10, 20))

    if not game_over:
        keys = pygame.key.get_pressed()
        if keys[pygame.K_LEFT] and player_x > road_x:
            player_x -= player_speed
        if keys[pygame.K_RIGHT] and player_x < road_x + road_width - 50:
            player_x += player_speed

        enemy_y += enemy_speed

        if enemy_y > HEIGHT:
            enemy_y = -100
            enemy_x = random.randint(road_x + 20, road_x + road_width - 70)
            score += 1
            enemy_speed += 0.3

        # Collision
        if (
            player_y < enemy_y + 90 and
            player_y + 90 > enemy_y and
            player_x < enemy_x + 50 and
            player_x + 50 > enemy_x
        ):
            game_over = True

    # Draw Cars
    draw_car(player_x, player_y, BLUE)
    draw_car(enemy_x, enemy_y, RED)

    # Score
    show_text(f"Score: {score}", font, YELLOW, 20, 20)

    if game_over:
        show_text("GAME OVER", big_font, RED, 240, 250)
        show_text("Press R to Restart", font, WHITE, 270, 330)

    pygame.display.update()
    clock.tick(60)

pygame.quit()
sys.exit()
