//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, SSURLBag;
@protocol OS_dispatch_queue;

@interface SKUIReloadConfigurationOperation : NSOperation
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _outputBlock;
    SSURLBag *_urlBag;
}

+ (id)cachePath;
- (void).cxx_destruct;
- (void)main;
@property(retain) SSURLBag *URLBag;
@property(copy) CDUnknownBlockType outputBlock;
- (id)init;

@end

