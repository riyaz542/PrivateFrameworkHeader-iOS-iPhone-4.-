/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIImage;

@interface SUImageMediaObject : SUMediaObject  {
}

@property(readonly) UIImage * pickedImage;


- (id)inputSourceMIMEType;
- (id)pickedImage;
- (id)_thumbnailImageForImageData:(id)arg1 size:(float)arg2 orientation:(int)arg3;
- (id)_fullSizeImage;
- (id)newInputSource;
- (void)saveToLibraryWithCompletionBlock:(id)arg1;
- (id)newThumbnailImageWithMaximumSize:(float)arg1;

@end
