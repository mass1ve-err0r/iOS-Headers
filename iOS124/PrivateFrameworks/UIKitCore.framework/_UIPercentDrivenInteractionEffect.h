//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIInteractionEffect-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIPercentDrivenInteractionEffect : NSObject <UIInteractionEffect>
{
    CDUnknownBlockType _progressBlock;
}

@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (id)initWithProgressBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

