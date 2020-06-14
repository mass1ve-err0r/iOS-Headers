//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class INImage;
@protocol INKeyImageProducing;

@protocol INKeyImageProducing <NSObject>
@property(readonly) INImage *_keyImage;
- (long long)_compareSubProducerOne:(id <INKeyImageProducing>)arg1 subProducerTwo:(id <INKeyImageProducing>)arg2;

@optional
- (_Bool)_isValidSubProducer:(id <INKeyImageProducing>)arg1;
@end

