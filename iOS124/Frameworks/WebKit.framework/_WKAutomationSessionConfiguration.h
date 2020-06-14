//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSCopying-Protocol.h>

@interface _WKAutomationSessionConfiguration : NSObject <NSCopying>
{
    _Bool _allowsInsecureMediaCapture;
    _Bool _suppressesICECandidateFiltering;
}

@property(nonatomic) _Bool suppressesICECandidateFiltering; // @synthesize suppressesICECandidateFiltering=_suppressesICECandidateFiltering;
@property(nonatomic) _Bool allowsInsecureMediaCapture; // @synthesize allowsInsecureMediaCapture=_allowsInsecureMediaCapture;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

