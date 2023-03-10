#ifndef CANVAS_H_
#define CANVAS_H_

#include <vector>
#include <ngl/Vec3.h>
#include <memory>

class Canvas
{
    public:
        Canvas(size_t _w, size_t _h);
        size_t width() const;
        size_t height() const;
        ngl::Vec3 getPixel(size_t _x, size_t _y) const;
        void setPixel(size_t _x, size_t _y, ngl::Vec3 _colour) const;
        const ngl::Vec3 * getPixelsBuffer() const;
        void drawScene();
    private:
        size_t m_width=0;
        size_t m_height=0;
        std::unique_ptr<ngl::Vec3 []> m_pixels; 
};

#endif