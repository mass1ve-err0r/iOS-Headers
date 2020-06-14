//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSMutableCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSSet, NSString, NSURL, UNNotificationIcon, UNNotificationSound;

@interface UNNotificationContent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSArray *_attachments;
    NSNumber *_badge;
    NSString *_body;
    NSString *_categoryIdentifier;
    NSDate *_date;
    NSString *_defaultActionTitle;
    NSURL *_defaultActionURL;
    NSDate *_expirationDate;
    NSString *_header;
    NSString *_launchImageName;
    NSArray *_peopleIdentifiers;
    _Bool _shouldHideDate;
    _Bool _shouldHideTime;
    _Bool _shouldIgnoreDoNotDisturb;
    _Bool _shouldIgnoreDowntime;
    _Bool _shouldSuppressScreenLightUp;
    _Bool _shouldPreventNotificationDismissalAfterDefaultAction;
    _Bool _shouldAuthenticateDefaultAction;
    _Bool _shouldBackgroundDefaultAction;
    _Bool _shouldSuppressDefaultAction;
    _Bool _shouldSuppressSyncDismissalWhenRemoved;
    _Bool _shouldUseRequestIdentifierForDismissalSync;
    UNNotificationSound *_sound;
    NSString *_subtitle;
    NSString *_threadIdentifier;
    NSString *_title;
    NSSet *_topicIdentifiers;
    NSString *_summaryArgument;
    unsigned long long _summaryArgumentCount;
    NSDictionary *_userInfo;
    UNNotificationIcon *_icon;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long summaryArgumentCount; // @synthesize summaryArgumentCount=_summaryArgumentCount;
@property(readonly, copy, nonatomic) NSString *summaryArgument; // @synthesize summaryArgument=_summaryArgument;
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(readonly, copy, nonatomic) UNNotificationSound *sound; // @synthesize sound=_sound;
@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, copy, nonatomic) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(readonly, copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, copy, nonatomic) NSNumber *badge; // @synthesize badge=_badge;
@property(readonly, copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSSet *topicIdentifiers; // @synthesize topicIdentifiers=_topicIdentifiers;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) _Bool shouldUseRequestIdentifierForDismissalSync; // @synthesize shouldUseRequestIdentifierForDismissalSync=_shouldUseRequestIdentifierForDismissalSync;
@property(readonly, nonatomic) _Bool shouldSuppressSyncDismissalWhenRemoved; // @synthesize shouldSuppressSyncDismissalWhenRemoved=_shouldSuppressSyncDismissalWhenRemoved;
@property(readonly, nonatomic) _Bool shouldSuppressScreenLightUp; // @synthesize shouldSuppressScreenLightUp=_shouldSuppressScreenLightUp;
@property(readonly, nonatomic) _Bool shouldSuppressDefaultAction; // @synthesize shouldSuppressDefaultAction=_shouldSuppressDefaultAction;
@property(readonly, nonatomic) _Bool shouldPreventNotificationDismissalAfterDefaultAction; // @synthesize shouldPreventNotificationDismissalAfterDefaultAction=_shouldPreventNotificationDismissalAfterDefaultAction;
@property(readonly, nonatomic) _Bool shouldBackgroundDefaultAction; // @synthesize shouldBackgroundDefaultAction=_shouldBackgroundDefaultAction;
@property(readonly, nonatomic) _Bool shouldAuthenticateDefaultAction; // @synthesize shouldAuthenticateDefaultAction=_shouldAuthenticateDefaultAction;
@property(readonly, nonatomic) _Bool shouldIgnoreDowntime; // @synthesize shouldIgnoreDowntime=_shouldIgnoreDowntime;
@property(readonly, nonatomic) _Bool shouldIgnoreDoNotDisturb; // @synthesize shouldIgnoreDoNotDisturb=_shouldIgnoreDoNotDisturb;
@property(readonly, nonatomic) _Bool shouldHideTime; // @synthesize shouldHideTime=_shouldHideTime;
@property(readonly, nonatomic) _Bool shouldHideDate; // @synthesize shouldHideDate=_shouldHideDate;
@property(readonly, copy, nonatomic) NSArray *peopleIdentifiers; // @synthesize peopleIdentifiers=_peopleIdentifiers;
@property(readonly, copy, nonatomic) NSString *launchImageName; // @synthesize launchImageName=_launchImageName;
@property(readonly, copy, nonatomic) UNNotificationIcon *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *header; // @synthesize header=_header;
@property(readonly, nonatomic) _Bool hasDefaultAction;
@property(readonly, copy, nonatomic) NSURL *defaultActionURL; // @synthesize defaultActionURL=_defaultActionURL;
@property(readonly, copy, nonatomic) NSString *defaultActionTitle; // @synthesize defaultActionTitle=_defaultActionTitle;
@property(readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithAttachments:(id)arg1 badge:(id)arg2 body:(id)arg3 categoryIdentifier:(id)arg4 date:(id)arg5 icon:(id)arg6 defaultActionTitle:(id)arg7 defaultActionURL:(id)arg8 expirationDate:(id)arg9 header:(id)arg10 launchImageName:(id)arg11 peopleIdentifiers:(id)arg12 shouldHideDate:(_Bool)arg13 shouldHideTime:(_Bool)arg14 shouldIgnoreDoNotDisturb:(_Bool)arg15 shouldIgnoreDowntime:(_Bool)arg16 shouldSuppressScreenLightUp:(_Bool)arg17 shouldAuthenticateDefaultAction:(_Bool)arg18 shouldBackgroundDefaultAction:(_Bool)arg19 shouldPreventNotificationDismissalAfterDefaultAction:(_Bool)arg20 shouldSuppressDefaultAction:(_Bool)arg21 shouldSuppressSyncDismissalWhenRemoved:(_Bool)arg22 shouldUseRequestIdentifierForDismissalSync:(_Bool)arg23 sound:(id)arg24 subtitle:(id)arg25 threadIdentifier:(id)arg26 title:(id)arg27 topicIdentifiers:(id)arg28 summaryArgument:(id)arg29 summaryArgumentCount:(unsigned long long)arg30 userInfo:(id)arg31;

@end

