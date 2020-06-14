//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteManagement/NSCopying-Protocol.h>

@class NSArray, NSString, RMFamilyMember;

@interface RMFamily : NSObject <NSCopying>
{
    NSArray *_members;
    RMFamilyMember *_me;
    NSString *_dataSource;
}

@property(copy, nonatomic) NSString *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) RMFamilyMember *me; // @synthesize me=_me;
@property(copy, nonatomic) NSArray *members; // @synthesize members=_members;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)initWithMembers:(id)arg1;
- (id)initWithFamilyCircle:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

