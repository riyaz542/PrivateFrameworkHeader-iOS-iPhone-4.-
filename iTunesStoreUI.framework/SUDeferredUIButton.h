/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableDictionary;

@interface SUDeferredUIButton : UIButton <SUDeferredUIView> {
    BOOL _deferredEnabled;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _deferredFrame;
    NSMutableDictionary *_deferredImages;
    NSMutableDictionary *_deferredTitles;
    BOOL _isDeferringInterfaceUpdates;
}

@property(getter=isDeferringInterfaceUpdates) BOOL deferringInterfaceUpdates;


- (void)setEnabled:(BOOL)arg1;
- (id)imageForState:(unsigned int)arg1;
- (void)setTitle:(id)arg1 forState:(unsigned int)arg2;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (id)titleForState:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isEnabled;
- (void)dealloc;
- (void)_commitDeferredInterfaceUpdates;
- (void)_saveCurrentStateAsDeferred;
- (void)_saveImagesAsDeferred;
- (void)_saveTitlesAsDeferred;
- (BOOL)isDeferringInterfaceUpdates;
- (void)setDeferringInterfaceUpdates:(BOOL)arg1;

@end
