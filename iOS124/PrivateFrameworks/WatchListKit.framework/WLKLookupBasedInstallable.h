//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchListKit/WLKInstallable-Protocol.h>

@class NSArray, NSString, NSURL, SSLookupItem;

@interface WLKLookupBasedInstallable : NSObject <WLKInstallable>
{
    SSLookupItem *_item;
}

@property(readonly, nonatomic) SSLookupItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *appStoreURL;
- (id)appIconURLForSize:(struct CGSize)arg1;
@property(readonly, copy, nonatomic) NSArray *appAdamIDs;
@property(readonly, copy, nonatomic) NSArray *appBundleIDs;
@property(readonly, copy, nonatomic) NSString *name;
- (id)initWithLookupItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

