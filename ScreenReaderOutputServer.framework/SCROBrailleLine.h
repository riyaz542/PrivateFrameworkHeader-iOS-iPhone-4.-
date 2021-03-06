/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSMutableAttributedString, <SCROBrailleDriverProtocol>, NSData;

@interface SCROBrailleLine : NSObject  {
    <SCROBrailleDriverProtocol> *_brailleDriver;
    int _size;
    int _statusSize;
    int _insetSize;
    int _lineOffset;
    int _leftInset;
    int _rightInset;
    int _masterStatusCellIndex;
    int _iBeamLocation;
    int _displayMode;
    BOOL _needsDisplayFlush;
    BOOL _needsStatusFlush;
    BOOL _blink;
    BOOL _currentUnread;
    BOOL _anyUnread;
    BOOL _isPanning;
    BOOL _showDotsSevenAndEight;
    char *_displayBuffer;
    char *_displayFilter;
    char *_blinkerBuffer;
    char *_statusFilter;
    NSData *_statusData;
    struct __CFArray { } *_chunkArray;
    struct __CFDictionary { } *_chunkDictionary;
    NSMutableAttributedString *_lineBuffer;
    id _appToken;
    int _firstToken;
    int _lastToken;
    struct { 
        NSData *data; 
        int alignment; 
        int length; 
        char *cells; 
    } _virtualStatus;
}

@property(readonly) BOOL needsDisplayFlush;

+ (void)initialize;

- (void)dealloc;
- (BOOL)display;
- (BOOL)_allowInset;
- (void)_updateOffsets;
- (BOOL)_blink:(BOOL)arg1;
- (void)_flushRealStatus;
- (void)_flush;
- (int)displayMode;
- (void)setCurrentUnread:(BOOL)arg1;
- (void)setAnyUnread:(BOOL)arg1;
- (void)setDisplayMode:(int)arg1;
- (void)setAppToken:(id)arg1;
- (int)tokenForRouterIndex:(int)arg1 location:(int*)arg2 appToken:(id*)arg3;
- (int)masterStatusCellIndex;
- (void)setShowDotsSevenAndEight:(BOOL)arg1;
- (BOOL)showDotsSevenAndEight;
- (id)initWithDriver:(id)arg1 mainSize:(int)arg2 statusSize:(int)arg3;
- (BOOL)anyUnread;
- (BOOL)currentUnread;
- (void)setFormatter:(id)arg1;
- (void)setVirtualStatus:(id)arg1 alignment:(int)arg2;
- (void)setRealStatus:(id)arg1;
- (id)createLineDescriptor;
- (void)setMainSize:(int)arg1;
- (void)setStatusSize:(int)arg1;
- (BOOL)getStatusRouterIndex:(int*)arg1 forRawIndex:(int)arg2;
- (id)appToken;
- (int)firstToken;
- (int)lastToken;
- (void)blinker;
- (BOOL)needsDisplayFlush;
- (void)setMasterStatusCellIndex:(int)arg1;
- (BOOL)panLeft;
- (BOOL)panRight;
- (BOOL)canPanRight;
- (BOOL)canPanLeft;

@end
