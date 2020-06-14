//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/GVRenderer-Protocol.h>

@class GVEdge, GVNode, NSArray, NSString, NSURL;

@protocol CIGVRenderer <GVRenderer>
@property _Bool drawEdgesFirst;
@property struct CGSize separation;
@property int direction;
- (void)flushRender;
- (void)drawEdge:(GVEdge *)arg1 withPath:(NSArray *)arg2;
- (void)drawNode:(GVNode *)arg1;
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)setFileTitle:(NSString *)arg1;
- (void)setFileURL:(NSURL *)arg1;
@end

