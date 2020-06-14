//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADEventPredicate.h>

#import <CalendarDaemon/NSSecureCoding-Protocol.h>

@class NSString;

@interface CADCalendarItemsWithExternalIdentifierPredicate : CADEventPredicate <NSSecureCoding>
{
    int _entityType;
    NSString *_externalIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) int entityType; // @synthesize entityType=_entityType;
@property(readonly, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
- (void).cxx_destruct;
- (id)predicateFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithExternalIdentifier:(id)arg1;
- (id)initWithExternalIdentifier:(id)arg1 entityType:(int)arg2;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;

@end

