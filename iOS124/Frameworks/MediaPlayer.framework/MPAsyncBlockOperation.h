//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@interface MPAsyncBlockOperation : MPAsyncOperation
{
    CDUnknownBlockType _startHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType startHandler; // @synthesize startHandler=_startHandler;
- (void).cxx_destruct;
- (void)execute;
- (id)initWithStartHandler:(CDUnknownBlockType)arg1;

@end

