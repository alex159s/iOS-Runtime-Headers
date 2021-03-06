/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATHTTPMessageParser : NSObject {
    <CATHTTPMessageParserDelegate> *_delegate;
    NSDictionary *mAllHeaderFields;
    struct __CFHTTPMessage { } *mCurrentMessage;
}

@property (nonatomic) <CATHTTPMessageParserDelegate> *delegate;

+ (id)encodeData:(id)arg1;

- (void).cxx_destruct;
- (BOOL)appendBytes:(const char *)arg1 length:(unsigned int)arg2;
- (void)dealloc;
- (id)delegate;
- (void)delegateDidReceiveData:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
