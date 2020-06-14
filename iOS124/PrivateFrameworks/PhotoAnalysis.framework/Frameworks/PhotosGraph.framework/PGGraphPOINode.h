//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraphNode.h>

#import <PhotosGraph/PGGraphLocalizable-Protocol.h>
#import <PhotosGraph/PGGraphSynonymSupport-Protocol.h>

@class NSArray, NSString;

@interface PGGraphPOINode : PGGraphNode <PGGraphLocalizable, PGGraphSynonymSupport>
{
}

+ (id)_localizationKeyForPOINode:(id)arg1;
@property(readonly, nonatomic) NSArray *localizedSynonyms;
@property(readonly, nonatomic) NSString *localizedName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

