/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKTextSelectionRect : UITextSelectionRect {
    struct SelectionRect { 
        struct IntRect { 
            struct IntPoint { 
                int m_x; 
                int m_y; 
            } m_location; 
            struct IntSize { 
                int m_width; 
                int m_height; 
            } m_size; 
        } m_rect; 
        bool m_direction; 
        int m_minX; 
        int m_maxX; 
        int m_maxY; 
        int m_lineNumber; 
        bool m_isLineBreak; 
        bool m_isFirstOnLine; 
        bool m_isLastOnLine; 
        bool m_containsStart; 
        bool m_containsEnd; 
        bool m_isHorizontal; 
        bool m_isInFixedPosition; 
        bool m_isRubyText; 
        int m_pageNumber; 
    }  _selectionRect;
}

- (id).cxx_construct;
- (bool)containsEnd;
- (bool)containsStart;
- (id)initWithCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSelectionRect:(const struct SelectionRect { struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_1_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_1_1_2; } x1; bool x2; int x3; int x4; int x5; int x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; int x15; }*)arg1;
- (bool)isVertical;
- (id)range;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (long long)writingDirection;

@end
