/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@class CPImage;

@interface CPShape : CPGraphicObject <CPDisposable> {
    unsigned int pdfObjectID;
    struct CGPath { } *path;
    BOOL isUprightRectangle;
    int windingRule;
    float lineWidth;
    struct CGColor { } *fillColor;
    struct CGColor { } *strokeColor;
    CPImage *fillPattern;
    CPImage *strokePattern;
}


- (void)dispose;
- (BOOL)isVisible;
- (id)attributes;
- (struct CGColor { }*)fillColor;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (struct CGPath { }*)path;
- (void)finalize;
- (id)string;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (float)lineWidth;
- (void)setLineWidth:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (BOOL)hasStroke;
- (BOOL)hasFill;
- (void)setPath:(struct CGPath { }*)arg1;
- (void)setWindingRule:(int)arg1;
- (int)windingRule;
- (struct CGColor { }*)strokeColor;
- (void)setStrokeColor:(struct CGColor { }*)arg1;
- (BOOL)isUprightRectangle;
- (void)makeLineFromVertex:(struct CGPoint { float x1; float x2; })arg1 toVertex:(struct CGPoint { float x1; float x2; })arg2;
- (void)recomputeBounds;
- (void)setPdfObjectID:(unsigned int)arg1;
- (void)recomputeRenderedBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })innerBounds;
- (void)setFillPattern:(id)arg1;
- (void)setStrokePattern:(id)arg1;
- (BOOL)hasSamePathAs:(id)arg1;
- (BOOL)isStrokeFor:(id)arg1;
- (BOOL)canCombineWith:(id)arg1;
- (id)strokePattern;
- (id)fillPattern;
- (unsigned int)pdfObjectID;
- (void)addShape:(id)arg1;
- (unsigned int)pathElementCount;
- (void)accept:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })renderedBounds;
- (long)zOrder;
- (id)initWithPDFShape:(struct CPPDFShape { struct CPPDFObject { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; unsigned int x2; struct CPPDFStyle {} *x3; int x4; struct CGPath {} *x5; BOOL x6; }*)arg1;

@end