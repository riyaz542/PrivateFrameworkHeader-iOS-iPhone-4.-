/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@interface ADClickLocation : PBCodable  {
    int _x;
    BOOL _hasX;
    int _y;
    BOOL _hasY;
    int _w;
    BOOL _hasW;
    int _h;
    BOOL _hasH;
}

@property(readonly) BOOL hasH;
@property int h;
@property(readonly) BOOL hasW;
@property int w;
@property(readonly) BOOL hasY;
@property int y;
@property(readonly) BOOL hasX;
@property int x;


- (BOOL)hasH;
- (BOOL)hasW;
- (BOOL)hasY;
- (BOOL)hasX;
- (void)setX:(int)arg1;
- (void)setY:(int)arg1;
- (void)setW:(int)arg1;
- (void)setH:(int)arg1;
- (int)w;
- (int)x;
- (id)dictionaryRepresentation;
- (int)y;
- (int)h;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
