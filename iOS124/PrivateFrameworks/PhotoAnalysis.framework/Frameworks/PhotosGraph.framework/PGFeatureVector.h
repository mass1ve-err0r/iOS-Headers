//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGGraph.h>

@interface PGFeatureVector : PGGraph
{
}

+ (id)featureVectorWithCalendarEvent:(id)arg1 requiresLocation:(_Bool)arg2 requiresPeople:(_Bool)arg3;
+ (id)featureVectorWithCalendarEvent:(id)arg1;
+ (id)_featureVectorWithLocalDate:(id)arg1 location:(id)arg2 peopleClues:(id)arg3 useImpreciseLocation:(_Bool)arg4;
+ (id)featureVectorWithLocalDate:(id)arg1 location:(id)arg2 peopleUUIDs:(id)arg3 inPhotoLibrary:(id)arg4;
+ (id)_featureVectorWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3 useImpreciseLocation:(_Bool)arg4;
+ (id)featureVectorWithLocalDate:(id)arg1 impreciseLocation:(id)arg2 peopleNames:(id)arg3;
+ (id)featureVectorWithLocalDate:(id)arg1 location:(id)arg2 peopleNames:(id)arg3;
+ (id)_personForName:(id)arg1;
+ (id)_imprecisePostalAddressFromPlacemark:(id)arg1;

@end

