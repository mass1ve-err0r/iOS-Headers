//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SYDWriteTrackerClient : NSObject
{
    unsigned long long _bytesWritten;
    unsigned short _numberOfWrites;
}

@property(nonatomic) unsigned short numberOfWrites; // @synthesize numberOfWrites=_numberOfWrites;
@property(nonatomic) unsigned long long bytesWritten; // @synthesize bytesWritten=_bytesWritten;
- (id)plistRepresentation;
- (id)initWithPlistRepresentation:(id)arg1;

@end

