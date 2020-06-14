//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface KNSlideNodeSlideSpecificTableCounter : NSObject
{
    NSUUID *_tableInfoUUID;
    unsigned long long _linkCount;
}

@property(readonly, nonatomic) unsigned long long linkCount; // @synthesize linkCount=_linkCount;
@property(retain, nonatomic) NSUUID *tableInfoUUID; // @synthesize tableInfoUUID=_tableInfoUUID;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSString *stringValue;
- (void)decrement;
- (void)increment;
- (id)initWithTableInfoUUID:(id)arg1 andLinkCount:(unsigned long long)arg2;

@end

