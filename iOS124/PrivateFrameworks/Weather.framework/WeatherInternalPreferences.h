//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

@protocol WeatherPreferencesPersistence;

@interface WeatherInternalPreferences : NSUserDefaults
{
    id <WeatherPreferencesPersistence> _persistence;
}

+ (id)sharedInternalPreferences;
@property(retain) id <WeatherPreferencesPersistence> persistence; // @synthesize persistence=_persistence;
- (void).cxx_destruct;
@property(readonly) _Bool isInternalInstall;

@end

