//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFLibrarySearchableIndexTesting-Protocol.h>

@class MFLibrarySearchableIndexQueryContext, NSString;

@interface MFLibrarySearchableIndexRecipientTester : NSObject <MFLibrarySearchableIndexTesting>
{
}

- (_Bool)verifySearchableItem:(id)arg1 againstExpectedData:(id)arg2;
@property(readonly, nonatomic) MFLibrarySearchableIndexQueryContext *context;
- (id)spotlightQueryFromDataSamples:(id)arg1;
- (id)transformDataForVerification:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

