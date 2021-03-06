/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray;

@interface LBSGAddress : PBCodable  {
    NSMutableArray *_formattedAddressLines;
    NSMutableArray *_components;
}

@property(readonly) int formattedAddressLinesCount;
@property(readonly) int componentsCount;
@property(retain) NSMutableArray * components;
@property(retain) NSMutableArray * formattedAddressLines;


- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (int)formattedAddressLinesCount;
- (void)setFormattedAddressLine:(id)arg1 atIndex:(unsigned int)arg2;
- (id)formattedAddressLineAtIndex:(unsigned int)arg1;
- (void)addFormattedAddressLine:(id)arg1;
- (void)setFormattedAddressLines:(id)arg1;
- (int)componentsCount;
- (void)setComponent:(id)arg1 atIndex:(unsigned int)arg2;
- (id)componentAtIndex:(unsigned int)arg1;
- (void)addComponent:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)formattedAddressLines;
- (void)setComponents:(id)arg1;
- (id)components;

@end
