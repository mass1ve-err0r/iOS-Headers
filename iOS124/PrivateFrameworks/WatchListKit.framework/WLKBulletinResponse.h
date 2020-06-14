//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchListKit/NSSecureCoding-Protocol.h>

@class BBActionResponse, NSDictionary, NSString;

@interface WLKBulletinResponse : NSObject <NSSecureCoding>
{
    BBActionResponse *_actionResponse;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) BBActionResponse *actionResponse; // @synthesize actionResponse=_actionResponse;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *userInfo;
@property(readonly, copy, nonatomic) NSDictionary *actionMetrics;
@property(readonly, copy, nonatomic) NSDictionary *bulletinMetrics;
@property(readonly, copy, nonatomic) NSString *message;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *coalescingID;
@property(readonly, nonatomic) long long bulletinSource;
- (id)init;

@end

