/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@interface ADAdConnection : PBCodable  {
    int _type;
    BOOL _hasType;
}

@property(readonly) BOOL hasType;
@property int type;


- (id)dictionaryRepresentation;
- (int)type;
- (void)setType:(int)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasType;
- (void)writeTo:(id)arg1;

@end
