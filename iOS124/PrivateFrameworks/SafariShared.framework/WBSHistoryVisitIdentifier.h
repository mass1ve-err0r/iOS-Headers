//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCopying-Protocol.h>
#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSString, WBSHistoryItem, WBSHistoryVisit;

@interface WBSHistoryVisitIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _hash;
    NSString *_urlString;
    double _visitTime;
    WBSHistoryItem *_associatedHistoryItem;
    WBSHistoryVisit *_associatedHistoryVisit;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) WBSHistoryVisit *associatedHistoryVisit; // @synthesize associatedHistoryVisit=_associatedHistoryVisit;
@property(retain, nonatomic) WBSHistoryItem *associatedHistoryItem; // @synthesize associatedHistoryItem=_associatedHistoryItem;
@property(readonly, nonatomic) double visitTime; // @synthesize visitTime=_visitTime;
@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURLString:(id)arg1 visitTime:(double)arg2;

@end

