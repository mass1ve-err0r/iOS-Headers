//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CompanionSync/NSObject-Protocol.h>

@class _SYStreamGuts;

@protocol _SYStreamRunLoopSourceHandler <NSObject>
@property(readonly, nonatomic, getter=_internal) _SYStreamGuts *internal;
- (void)_postEventToDelegate:(unsigned long long)arg1;
@end

