#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

/*
 * 每一个电阻器都有一个值，很小很小不足以直接印刷到电阻器上
 *
 * 制造商想了个注意，采用颜色映射数值的方式 间接表示值
 * 也就是说用颜色编码 值
 * 
 * 例如：颜色有且其代表的数为：
 * black -》0
 * brown -》1
 * etc
 *
 * 这种颜色编码格式可以查看Wikipedia
 *
 * 在这里，我们需要做的是：
 * 根据具体的单一颜色得到其表示的值
 * 然后是能够获取到所有这种可用的颜色
 *
 */

typedef enum {
    BLACK,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE
} resistor_band_t;

resistor_band_t color_code(resistor_band_t code);

// return all colors of resistor
resistor_band_t* colors(void);

#endif
