//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKExtendedTraitCollection, PXPlacesSnapshotFactory;
@protocol OS_dispatch_queue;

@interface PXPlacesSearchProvider : NSObject
{
    PXPlacesSnapshotFactory *_factory;
    PKExtendedTraitCollection *_extendedTraitCollection;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) PKExtendedTraitCollection *extendedTraitCollection; // @synthesize extendedTraitCollection=_extendedTraitCollection;
@property(retain, nonatomic) PXPlacesSnapshotFactory *factory; // @synthesize factory=_factory;
- (void).cxx_destruct;
- (void)requestMapSnapshotForQuery:(id)arg1 ofSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

