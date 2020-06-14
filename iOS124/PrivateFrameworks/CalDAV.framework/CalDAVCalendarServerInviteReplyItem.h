//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVItemWithHrefChildItem, CoreDAVItemWithNoChildren, CoreDAVLeafItem, NSString, NSURL;

@interface CalDAVCalendarServerInviteReplyItem : CoreDAVItem
{
    CoreDAVHrefItem *_href;
    CoreDAVItemWithNoChildren *_inviteStatus;
    CoreDAVItemWithHrefChildItem *_hostURL;
    CoreDAVLeafItem *_inReplyTo;
    CoreDAVLeafItem *_summary;
    NSString *_firstName;
    NSString *_lastName;
    NSURL *_acceptedURL;
}

@property(retain, nonatomic) NSURL *acceptedURL; // @synthesize acceptedURL=_acceptedURL;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) CoreDAVLeafItem *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) CoreDAVLeafItem *inReplyTo; // @synthesize inReplyTo=_inReplyTo;
@property(retain, nonatomic) CoreDAVItemWithHrefChildItem *hostURL; // @synthesize hostURL=_hostURL;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *inviteStatus; // @synthesize inviteStatus=_inviteStatus;
@property(retain, nonatomic) CoreDAVHrefItem *href; // @synthesize href=_href;
- (void).cxx_destruct;
- (id)copyParseRules;
- (void)setAcceptedURLItem:(id)arg1;
- (void)setLastNameItem:(id)arg1;
- (void)setFirstNameItem:(id)arg1;
- (id)init;

@end

