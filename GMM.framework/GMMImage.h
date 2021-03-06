/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString, NSData;

@interface GMMImage : PBCodable  {
    NSString *_key;
    int _type;
    NSData *_imageData;
}

@property(readonly) BOOL hasKey;
@property(readonly) BOOL hasImageData;
@property(retain) NSData * imageData;
@property int type;
@property(retain) NSString * key;


- (id)key;
- (void)setKey:(id)arg1;
- (id)dictionaryRepresentation;
- (int)type;
- (void)setType:(int)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)hasKey;
- (BOOL)hasImageData;
- (BOOL)readFrom:(id)arg1;
- (id)imageData;
- (void)writeTo:(id)arg1;
- (void)setImageData:(id)arg1;

@end
