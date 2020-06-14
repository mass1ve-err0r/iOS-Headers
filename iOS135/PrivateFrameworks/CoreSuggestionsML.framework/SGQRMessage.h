/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

@interface SGQRMessage : NSObject {
    NSString * _context;
    NSString * _message;
    NSDate * _time;
}

@property (nonatomic, readonly) NSString *context;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) NSDate *time;

- (void).cxx_destruct;
- (id)context;
- (id)initWithMessage:(id)arg1 forContext:(id)arg2 time:(id)arg3;
- (bool)isEqualToQRMessage:(id)arg1;
- (id)message;
- (id)time;

@end