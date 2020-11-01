/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
 */

@interface DIAttributeImage : DIAttribute <NSSecureCoding> {
    NSString * _encoding;
    unsigned long long  _format;
    unsigned long long  _height;
    unsigned long long  _width;
    NSData * currentValue;
}

@property (getter=getCurrentValue, nonatomic, copy) NSData *currentValue;
@property (nonatomic, copy) NSString *encoding;
@property (nonatomic) unsigned long long format;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) unsigned long long width;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encoding;
- (unsigned long long)format;
- (id)getCurrentValue;
- (unsigned long long)height;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setCurrentValue:(id)arg1;
- (void)setEncoding:(id)arg1;
- (void)setFormat:(unsigned long long)arg1;
- (unsigned long long)width;

@end