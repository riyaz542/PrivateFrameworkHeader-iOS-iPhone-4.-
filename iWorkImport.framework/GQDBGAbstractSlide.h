/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDBGObjectPlaceholder, GQDBGSlideNumberPlaceholder, GQDSStyle, GQDSStylesheet, GQDBGBodyPlaceholder, GQDBGTitlePlaceholder;

@interface GQDBGAbstractSlide : NSObject  {
    GQDSStylesheet *mStylesheet;
    GQDSStyle *mSlideStyle;
    GQDBGTitlePlaceholder *mTitlePlaceholder;
    GQDBGBodyPlaceholder *mBodyPlaceholder;
    GQDBGObjectPlaceholder *mObjectPlaceholder;
    GQDBGSlideNumberPlaceholder *mSlideNumberPlaceholder;
    BOOL mHidden;
    char *mID;
    BOOL mCallGenerator;
}


- (int)readAttributesForSlide:(struct _xmlTextReader { }*)arg1;
- (id)slideStyle;
- (char *)ID;
- (BOOL)isHidden;
- (void)dealloc;
- (id)stylesheet;

@end
