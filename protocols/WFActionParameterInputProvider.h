/* Generated by RuntimeBrowser.
 */

@protocol WFActionParameterInputProvider <NSObject>

@required

- (bool)action:(WFAction *)arg1 canProvideInputForParameter:(WFParameter *)arg2;
- (void)action:(void *)arg1 provideInputForParameters:(void *)arg2 withDefaultStates:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: WFAction *, NSOrderedSet *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end