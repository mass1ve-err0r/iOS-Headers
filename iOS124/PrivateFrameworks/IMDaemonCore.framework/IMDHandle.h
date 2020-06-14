//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IMDHandle : NSObject
{
    NSString *_id;
    NSString *_unformattedID;
    NSString *_countryCode;
    NSString *_personCentricID;
}

@property(retain, nonatomic) NSString *unformattedID; // @synthesize unformattedID=_unformattedID;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_id;
@property(retain, nonatomic) NSString *personCentricID; // @synthesize personCentricID=_personCentricID;
- (_Bool)isBusiness;
@property(readonly, retain, nonatomic) NSDictionary *handleInfo;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isBetterDefinedThan:(id)arg1;
- (long long)compareIDs:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3 personCentricID:(id)arg4;
- (id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3;

@end
