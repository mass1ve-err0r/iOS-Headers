//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVInteraction-Protocol.h>

@class NSString;

@interface SVInteraction : NSObject <SVInteraction>
{
    CDUnknownBlockType interactionBlock;
    CDUnknownBlockType _contextProvider;
}

@property(readonly, nonatomic) CDUnknownBlockType contextProvider; // @synthesize contextProvider=_contextProvider;
@property(copy, nonatomic, setter=uponInteraction:) CDUnknownBlockType interactionBlock; // @synthesize interactionBlock;
- (void).cxx_destruct;
- (void)performWithObject:(id)arg1;
- (id)initWithContextProvider:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

