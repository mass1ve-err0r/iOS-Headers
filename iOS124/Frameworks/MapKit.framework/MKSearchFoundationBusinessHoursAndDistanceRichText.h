//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKSearchFoundationRichText.h>

__attribute__((visibility("hidden")))
@interface MKSearchFoundationBusinessHoursAndDistanceRichText : MKSearchFoundationRichText
{
    _Bool _businessHoursResolved;
    _Bool _distanceResolved;
}

@property(getter=isDistanceResolved) _Bool distanceResolved; // @synthesize distanceResolved=_distanceResolved;
@property(getter=isBusinessHoursResolved) _Bool businessHoursResolved; // @synthesize businessHoursResolved=_businessHoursResolved;
- (_Bool)isRichTextResolved;
- (void)resolveDistanceNotFound;
- (void)resolveDistanceString:(id)arg1 lines:(id)arg2;
- (void)resolveBusinessHoursByMapItem:(id)arg1 lines:(id)arg2;

@end

