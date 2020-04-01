open TestFramework;

describe("my first test suite", ({test, _}) => {
    test("1 + 1 should equal 2", ({expect, _}) => {
      expect.int(Optlib.pow2(2)).toBe(4);
    });
  });