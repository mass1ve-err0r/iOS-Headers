//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsKit/BSDescriptionProviding-Protocol.h>
#import <UserNotificationsKit/NSCopying-Protocol.h>
#import <UserNotificationsKit/NSMutableCopying-Protocol.h>

@class NSArray, NSDate, NSString, NSTimeZone, UIImage;

@interface NCNotificationContent : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    NSString *_header;
    NSString *_title;
    NSString *_subtitle;
    NSString *_message;
    NSString *_hiddenPreviewsBodyPlaceholder;
    NSString *_categorySummaryFormat;
    NSString *_summaryArgument;
    unsigned long long _summaryArgumentCount;
    NSArray *_icons;
    NSArray *_carPlayIcons;
    UIImage *_attachmentImage;
    NSDate *_date;
    _Bool _dateAllDay;
    NSTimeZone *_timeZone;
    NSString *_topic;
}

@property(readonly, copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, nonatomic, getter=isDateAllDay) _Bool dateAllDay; // @synthesize dateAllDay=_dateAllDay;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) UIImage *attachmentImage; // @synthesize attachmentImage=_attachmentImage;
@property(readonly, nonatomic) NSArray *carPlayIcons; // @synthesize carPlayIcons=_carPlayIcons;
@property(readonly, nonatomic) NSArray *icons; // @synthesize icons=_icons;
@property(readonly, nonatomic) unsigned long long summaryArgumentCount; // @synthesize summaryArgumentCount=_summaryArgumentCount;
@property(readonly, copy, nonatomic) NSString *summaryArgument; // @synthesize summaryArgument=_summaryArgument;
@property(readonly, copy, nonatomic) NSString *categorySummaryFormat; // @synthesize categorySummaryFormat=_categorySummaryFormat;
@property(readonly, copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder; // @synthesize hiddenPreviewsBodyPlaceholder=_hiddenPreviewsBodyPlaceholder;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) UIImage *carPlayIcon;
@property(readonly, nonatomic) UIImage *icon;
- (id)initWithNotificationContent:(id)arg1;

// Remaining properties
@property(readonly) Class superclass;

@end

