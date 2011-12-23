/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUImageModifier, UIColor;

@interface SUImageDataProvider : ISDataProvider <NSCopying> {
    UIColor *_fillColor;
    struct CGSize { 
        float width; 
        float height; 
    } _finalSize;
    float _inputImageScale;
    SUImageModifier *_modifier;
}

@property(retain) SUImageModifier * modifier;
@property float inputImageScale;
@property struct CGSize { float width; float height; } finalSize;
@property(retain) UIColor * fillColor;


- (id)fillColor;
- (void)setFillColor:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })finalSize;
- (void)setModifier:(id)arg1;
- (void)setFinalSize:(struct CGSize { float x1; float x2; })arg1;
- (id)newImageFromImage:(id)arg1;
- (void)setInputImageScale:(float)arg1;
- (void)_getFinalSize:(struct CGSize { float x1; float x2; }*)arg1 imageFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 forImage:(id)arg3 withModifier:(id)arg4;
- (id)modifier;
- (float)inputImageScale;
- (BOOL)parseData:(id)arg1 returningError:(id*)arg2;

@end