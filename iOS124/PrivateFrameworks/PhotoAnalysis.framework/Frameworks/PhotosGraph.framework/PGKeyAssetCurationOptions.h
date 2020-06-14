//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/NSCopying-Protocol.h>

@class CLLocation, NSSet, PHAsset;

@interface PGKeyAssetCurationOptions : NSObject <NSCopying>
{
    _Bool _focusOnPeople;
    _Bool _complete;
    _Bool _allowContextualTrip;
    _Bool _useSummarizer;
    _Bool _useContextualCurationOnly;
    _Bool _prefilterAssetsWithFaces;
    CLLocation *_referenceLocation;
    NSSet *_referencePersonUUIDs;
    unsigned long long _precision;
    double _prefilterAssetsWithFacesThreshold;
    PHAsset *_referenceAsset;
}

@property(readonly, nonatomic) PHAsset *referenceAsset; // @synthesize referenceAsset=_referenceAsset;
@property(nonatomic) double prefilterAssetsWithFacesThreshold; // @synthesize prefilterAssetsWithFacesThreshold=_prefilterAssetsWithFacesThreshold;
@property(nonatomic) _Bool prefilterAssetsWithFaces; // @synthesize prefilterAssetsWithFaces=_prefilterAssetsWithFaces;
@property(nonatomic) _Bool useContextualCurationOnly; // @synthesize useContextualCurationOnly=_useContextualCurationOnly;
@property(nonatomic) _Bool useSummarizer; // @synthesize useSummarizer=_useSummarizer;
@property(nonatomic) _Bool allowContextualTrip; // @synthesize allowContextualTrip=_allowContextualTrip;
@property(nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(nonatomic) unsigned long long precision; // @synthesize precision=_precision;
@property(nonatomic) _Bool focusOnPeople; // @synthesize focusOnPeople=_focusOnPeople;
@property(retain, nonatomic) NSSet *referencePersonUUIDs; // @synthesize referencePersonUUIDs=_referencePersonUUIDs;
@property(retain, nonatomic) CLLocation *referenceLocation; // @synthesize referenceLocation=_referenceLocation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReferenceAsset:(id)arg1;
- (id)init;

@end

