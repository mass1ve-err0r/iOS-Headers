//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MKTrafficSupport : NSObject
{
}

+ (id)sharedTrafficSupport;
- (id)localizedSubtitleForStreet:(id)arg1 crossStreet:(id)arg2;
- (id)localizedTitleForIncidentType:(long long)arg1 laneType:(long long)arg2 laneCount:(unsigned long long)arg3;
- (id)localizedTitleForGEOIncidentType:(int)arg1 laneType:(int)arg2 laneCount:(unsigned long long)arg3;
- (long long)_convertType:(int)arg1;
- (void)setupTrafficIncidents;

@end

