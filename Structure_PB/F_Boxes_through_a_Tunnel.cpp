#include <stdio.h>
#include <stdlib.h>

struct Box
{
    int length, width, height;
};
bool is_lower_than_max_height(Box &a)
{
    if (a.height < 41)
        return 1;
    return 0;
}
int get_volume(Box &a)
{

    return a.length * a.height * a.width;
}
int main()
{
    int T = 1;
    scanf("%d", &T);

    struct Box *boxes = (struct Box *)malloc(T * sizeof(struct Box));

    for (int i = 0; i < T; i++)
    {
        int l, w, h;
        scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
        if (is_lower_than_max_height(boxes[i]))
        {
            printf("%d\n", get_volume(boxes[i]));
        }
    }
    return 0;
}