//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSData, NSString;

@interface MRGenericMessage : MRProtocolMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) NSData *data;
@property(readonly, nonatomic) NSString *key;
- (id)initWithKey:(id)arg1 data:(id)arg2;

@end

