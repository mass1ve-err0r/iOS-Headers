//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcutsUI/CRKIdentifiedProviding-Protocol.h>

@class NSString;

@interface VCUICKPEntryPoint : NSObject <CRKIdentifiedProviding>
{
}

@property(readonly, copy, nonatomic) NSString *providerIdentifier;
- (id)cardViewControllerForCard:(id)arg1;
- (unsigned long long)displayPriorityForCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

