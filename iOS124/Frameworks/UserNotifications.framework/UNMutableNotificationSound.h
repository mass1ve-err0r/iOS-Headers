//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotifications/UNNotificationSound.h>

@class NSDictionary, NSNumber, NSString;

@interface UNMutableNotificationSound : UNNotificationSound
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSDictionary *vibrationPattern; // @dynamic vibrationPattern;
@property(copy, nonatomic) NSString *vibrationIdentifier; // @dynamic vibrationIdentifier;
@property(nonatomic) unsigned long long toneMediaLibraryItemIdentifier; // @dynamic toneMediaLibraryItemIdentifier;
@property(copy, nonatomic) NSString *toneIdentifier; // @dynamic toneIdentifier;
@property(copy, nonatomic) NSString *toneFileName; // @dynamic toneFileName;
@property(nonatomic) _Bool shouldRepeat; // @dynamic shouldRepeat;
@property(nonatomic) _Bool shouldIgnoreRingerSwitch; // @dynamic shouldIgnoreRingerSwitch;
@property(nonatomic) double maximumDuration; // @dynamic maximumDuration;
@property(nonatomic, getter=isCritical) _Bool critical; // @dynamic critical;
@property(copy, nonatomic) NSNumber *audioVolume; // @dynamic audioVolume;
@property(copy, nonatomic) NSString *audioCategory; // @dynamic audioCategory;
@property(copy, nonatomic) NSString *alertTopic; // @dynamic alertTopic;

@end

