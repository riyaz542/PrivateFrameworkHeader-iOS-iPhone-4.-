/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface MailMultiSelectButton : UIControl  {
    unsigned int _isChecked : 1;
    unsigned int _isSelected : 1;
}

+ (float)defaultWidth;
+ (id)minusImage;
+ (id)plusImage;
+ (id)minusCenterImage;

- (BOOL)isRotated;
- (void)toggleRotate:(BOOL)arg1;
- (BOOL)isHiding;
- (void)setHiding:(BOOL)arg1;
- (BOOL)isRotating;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithRemoveControl:(id)arg1 checked:(BOOL)arg2;
- (void)setChecked:(BOOL)arg1 selected:(BOOL)arg2;

@end
