//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSUUID;

@interface _HDAuthorizationRequest : NSObject
{
    CDUnknownBlockType _completionHandler;
    NSUUID *_identifier;
    NSSet *_typesToWrite;
    NSSet *_typesToRead;
}

@property(readonly, copy, nonatomic) NSSet *typesToRead; // @synthesize typesToRead=_typesToRead;
@property(readonly, copy, nonatomic) NSSet *typesToWrite; // @synthesize typesToWrite=_typesToWrite;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (void)invokeCompletionHandlerWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)initWithIdentifier:(id)arg1 typesToWrite:(id)arg2 typesToRead:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

