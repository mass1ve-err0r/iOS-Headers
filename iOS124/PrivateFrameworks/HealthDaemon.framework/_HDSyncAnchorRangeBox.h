//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSSecureCoding-Protocol.h>

@interface _HDSyncAnchorRangeBox : NSObject <NSSecureCoding>
{
    struct HDSyncAnchorRange _anchorRange;
}

+ (_Bool)supportsSecureCoding;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct HDSyncAnchorRange)anchorRange;
- (id)initWithHDSyncAnchorRange:(struct HDSyncAnchorRange)arg1;

@end

